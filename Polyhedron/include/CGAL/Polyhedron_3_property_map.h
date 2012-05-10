// Copyright (c) 2011 GeometryFactory (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you may redistribute it under
// the terms of the Q Public License version 1.0.
// See the file LICENSE.QPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
//
//
// Author(s)     : Sebastien Loriot
//

#ifndef CGAL_POLYHEDRON_SIMPLEX_PROPERTY_MAP_H
#define CGAL_POLYHEDRON_SIMPLEX_PROPERTY_MAP_H

#include <CGAL/property_map.h>
#include <boost/type_traits/is_const.hpp>
#include <boost/mpl/if.hpp>
#include <CGAL/boost/graph/graph_traits_Polyhedron_3.h>
#include <CGAL/boost/graph/properties_Polyhedron_3.h>

namespace CGAL{

//property map
template <class Polyhedron> 
struct Triangle_from_facet_handle_property_map{
  Triangle_from_facet_handle_property_map(Polyhedron* = NULL){}
  //classical typedefs
  typedef typename boost::mpl::if_<
    typename boost::is_const<Polyhedron>::type,
    typename Polyhedron::Facet_const_handle,
    typename Polyhedron::Facet_handle >::type key_type;
  typedef typename Polyhedron::Traits::Kernel::Triangle_3 value_type;
  typedef value_type reference;
  typedef boost::readable_property_map_tag category;
};
//get function for property map
template <class Polyhedron>
inline
typename Polyhedron::Traits::Kernel::Triangle_3
get(Triangle_from_facet_handle_property_map<Polyhedron>,
    typename Triangle_from_facet_handle_property_map<Polyhedron>::key_type f)
{
  typedef typename Polyhedron::Traits::Kernel Kernel;
  CGAL_precondition(f->halfedge() == f->halfedge()->next()->next()->next());
  const typename Kernel::Point_3& a = f->halfedge()->vertex()->point();
  const typename Kernel::Point_3& b = f->halfedge()->next()->vertex()->point();
  const typename Kernel::Point_3& c = f->halfedge()->next()->next()->vertex()->point();  
  return typename Kernel::Triangle_3(a,b,c);
}


template <class HalfedgeGraph> 
struct Segment_from_edge_descriptor_property_map{
  Segment_from_edge_descriptor_property_map(const HalfedgeGraph* g= NULL):m_graph( const_cast<HalfedgeGraph*>(g) ){}
  //classical typedefs
  typedef typename boost::property_traits< typename boost::property_map< HalfedgeGraph, vertex_point_t>::type >::value_type Point;  
  typedef typename boost::graph_traits<HalfedgeGraph>::edge_descriptor key_type;
  typedef typename Kernel_traits<Point>::Kernel::Segment_3 value_type;
    
  typedef value_type reference;
  typedef boost::readable_property_map_tag category;
  //data
  HalfedgeGraph* m_graph;
};
//get function for property map
template <class HalfedgeGraph>
inline
typename Segment_from_edge_descriptor_property_map<HalfedgeGraph>::value_type
get(Segment_from_edge_descriptor_property_map<HalfedgeGraph> pmap,
    typename Segment_from_edge_descriptor_property_map<HalfedgeGraph>::key_type h)
{
  typedef typename boost::property_traits< typename boost::property_map< HalfedgeGraph, vertex_point_t>::type >::value_type Point;  
  typedef typename Kernel_traits<Point>::Kernel Kernel;
  const Point& a = boost::source(h,*pmap.m_graph)->point();
  const Point& b = boost::target(h,*pmap.m_graph)->point();
  return typename Kernel::Segment_3(a,b);
}


//property map to access a point from a facet handle
template <class Polyhedron> 
struct One_point_from_facet_handle_property_map{
  One_point_from_facet_handle_property_map(Polyhedron* = NULL){}
  //classical typedefs
  typedef typename boost::mpl::if_<
    typename boost::is_const<Polyhedron>::type,
    typename Polyhedron::Facet_const_handle,
    typename Polyhedron::Facet_handle >::type key_type;
  typedef typename Polyhedron::Traits::Kernel::Point_3 value_type;
  typedef const value_type& reference;
  typedef boost::lvalue_property_map_tag category;
};
//get function for property map
template <class Polyhedron>
inline
typename One_point_from_facet_handle_property_map<Polyhedron>::reference
get(One_point_from_facet_handle_property_map<Polyhedron>,
    typename One_point_from_facet_handle_property_map<Polyhedron>::key_type f)
{
  return f->halfedge()->vertex()->point();
}

//property map to access a point from an edge
template <class HalfedgeGraph> 
struct Source_point_from_edge_descriptor{
  Source_point_from_edge_descriptor(const HalfedgeGraph* g= NULL):m_graph( const_cast<HalfedgeGraph*>(g) ){}
  //classical typedefs
  typedef typename boost::property_traits< typename boost::property_map< HalfedgeGraph, vertex_point_t>::type >::value_type value_type;
  typedef typename boost::property_traits< typename boost::property_map< HalfedgeGraph, vertex_point_t>::type >::reference reference;
  typedef typename boost::graph_traits<HalfedgeGraph>::edge_descriptor key_type;
  typedef boost::readable_property_map_tag category;
  //data
  HalfedgeGraph* m_graph;
};
//get function for property map
template <class HalfedgeGraph>
inline
typename Source_point_from_edge_descriptor<HalfedgeGraph>::reference
get(Source_point_from_edge_descriptor<HalfedgeGraph> pmap,
    typename boost::graph_traits<HalfedgeGraph>::edge_descriptor h)
{
  return boost::source(h,*pmap.m_graph)->point();
}

} //namespace CGAL

#endif //CGAL_POLYHEDRON_SIMPLEX_PROPERTY_MAP_H

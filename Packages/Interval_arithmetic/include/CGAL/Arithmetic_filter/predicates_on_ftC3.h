// ======================================================================
//
// Copyright (c) 1997 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------
//
// release       :
// release_date  :
//
// file          : include/CGAL/Arithmetic_filter/predicates_on_ftC3.h
// package       : Interval_arithmetic
// source        : include/CGAL/predicates_on_ftC3.h
// revision      : $Revision$
// revision_date :
// author(s)     : Sylvain.Pion@sophia.inria.fr
//
// coordinator   : INRIA Sophia-Antipolis (Herve.Bronnimann@sophia.inria.fr)
//
// ======================================================================


#ifndef CGAL_ARITHMETIC_FILTER_PREDICATES_ON_FTC3_H
#define CGAL_ARITHMETIC_FILTER_PREDICATES_ON_FTC3_H

// This file is automatically generated by the script for filtering
// predicates, using Interval arithmetic.

#ifndef CGAL_DETERMINANT_H
#include <CGAL/determinant.h>
#endif // CGAL_DETERMINANT_H
#ifndef CGAL_BASIC_CONSTRUCTIONS_FTC3_H
#include <CGAL/basic_constructions_ftC3.h>
#endif // CGAL_BASIC_CONSTRUCTIONS_FTC3_H

CGAL_BEGIN_NAMESPACE

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
compare_lexicographically_xyzC3(const Filtered_exact<CT,ET> &x1,
	const Filtered_exact<CT,ET> &y1,
	const Filtered_exact<CT,ET> &z1,
	                                const Filtered_exact<CT,ET> &x2,
	const Filtered_exact<CT,ET> &y2,
	const Filtered_exact<CT,ET> &z2)
{
  Comparison_result result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = compare_lexicographically_xyzC3(
		x1.interval(),
		y1.interval(),
		z1.interval(),
		x2.interval(),
		y2.interval(),
		z2.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = compare_lexicographically_xyzC3(
		x1.exact(),
		y1.exact(),
		z1.exact(),
		x2.exact(),
		y2.exact(),
		z2.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
collinearC3(const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	            const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	            const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = collinearC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = collinearC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
Orientation
orientationC3(const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	              const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	              const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz,
	              const Filtered_exact<CT,ET> &sx,
	const Filtered_exact<CT,ET> &sy,
	const Filtered_exact<CT,ET> &sz)
{
  Orientation result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = orientationC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval(),
		sx.interval(),
		sy.interval(),
		sz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = orientationC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact(),
		sx.exact(),
		sy.exact(),
		sz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
collinear_are_ordered_along_lineC3(
     const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	     const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	     const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = collinear_are_ordered_along_lineC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = collinear_are_ordered_along_lineC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
collinear_are_strictly_ordered_along_lineC3(
     const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	     const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	     const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = collinear_are_strictly_ordered_along_lineC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = collinear_are_strictly_ordered_along_lineC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact());
  }
  return result;
}


template < class CT, class ET >
// CGAL_KERNEL_LARGE_INLINE
Oriented_side
side_of_oriented_sphereC3(const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	                          const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	                          const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz,
	                          const Filtered_exact<CT,ET> &sx,
	const Filtered_exact<CT,ET> &sy,
	const Filtered_exact<CT,ET> &sz,
	                          const Filtered_exact<CT,ET> &tx,
	const Filtered_exact<CT,ET> &ty,
	const Filtered_exact<CT,ET> &tz)
{
  Oriented_side result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = side_of_oriented_sphereC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval(),
		sx.interval(),
		sy.interval(),
		sz.interval(),
		tx.interval(),
		ty.interval(),
		tz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = side_of_oriented_sphereC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact(),
		sx.exact(),
		sy.exact(),
		sz.exact(),
		tx.exact(),
		ty.exact(),
		tz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
Bounded_side
side_of_bounded_sphereC3(const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	                         const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	                         const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz,
	                         const Filtered_exact<CT,ET> &sx,
	const Filtered_exact<CT,ET> &sy,
	const Filtered_exact<CT,ET> &sz,
	                         const Filtered_exact<CT,ET> &tx,
	const Filtered_exact<CT,ET> &ty,
	const Filtered_exact<CT,ET> &tz)
{
  Bounded_side result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = side_of_bounded_sphereC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval(),
		sx.interval(),
		sy.interval(),
		sz.interval(),
		tx.interval(),
		ty.interval(),
		tz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = side_of_bounded_sphereC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact(),
		sx.exact(),
		sy.exact(),
		sz.exact(),
		tx.exact(),
		ty.exact(),
		tz.exact());
  }
  return result;
}


template < class CT, class ET >
// CGAL_KERNEL_INLINE
Comparison_result
cmp_dist_to_pointC3(const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	                    const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	                    const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz)
{
  Comparison_result result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = cmp_dist_to_pointC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = cmp_dist_to_pointC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_larger_dist_to_pointC3(const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	                           const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	                           const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = has_larger_dist_to_pointC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = has_larger_dist_to_pointC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_smaller_dist_to_pointC3(const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	                            const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz,
	                            const Filtered_exact<CT,ET> &rx,
	const Filtered_exact<CT,ET> &ry,
	const Filtered_exact<CT,ET> &rz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = has_smaller_dist_to_pointC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = has_smaller_dist_to_pointC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
cmp_signed_dist_to_planeC3(
     const Filtered_exact<CT,ET> &pa,
	const Filtered_exact<CT,ET> &pb,
	const Filtered_exact<CT,ET> &pc,
	const Filtered_exact<CT,ET> &pd,
	     const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	     const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz)
{
  Comparison_result result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = cmp_signed_dist_to_planeC3(
		pa.interval(),
		pb.interval(),
		pc.interval(),
		pd.interval(),
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = cmp_signed_dist_to_planeC3(
		pa.exact(),
		pb.exact(),
		pc.exact(),
		pd.exact(),
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_larger_signed_dist_to_planeC3(
     const Filtered_exact<CT,ET> &pa,
	const Filtered_exact<CT,ET> &pb,
	const Filtered_exact<CT,ET> &pc,
	const Filtered_exact<CT,ET> &pd,
	     const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	     const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = has_larger_signed_dist_to_planeC3(
		pa.interval(),
		pb.interval(),
		pc.interval(),
		pd.interval(),
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = has_larger_signed_dist_to_planeC3(
		pa.exact(),
		pb.exact(),
		pc.exact(),
		pd.exact(),
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_smaller_signed_dist_to_planeC3(
     const Filtered_exact<CT,ET> &pa,
	const Filtered_exact<CT,ET> &pb,
	const Filtered_exact<CT,ET> &pc,
	const Filtered_exact<CT,ET> &pd,
	     const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	     const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = has_smaller_signed_dist_to_planeC3(
		pa.interval(),
		pb.interval(),
		pc.interval(),
		pd.interval(),
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = has_smaller_signed_dist_to_planeC3(
		pa.exact(),
		pb.exact(),
		pc.exact(),
		pd.exact(),
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact());
  }
  return result;
}
template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
cmp_signed_dist_to_planeC3(
     const Filtered_exact<CT,ET> &ppx,
	const Filtered_exact<CT,ET> &ppy,
	const Filtered_exact<CT,ET> &ppz,
	     const Filtered_exact<CT,ET> &pqx,
	const Filtered_exact<CT,ET> &pqy,
	const Filtered_exact<CT,ET> &pqz,
	     const Filtered_exact<CT,ET> &prx,
	const Filtered_exact<CT,ET> &pry,
	const Filtered_exact<CT,ET> &prz,
	     const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	     const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz)
{
  Comparison_result result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = cmp_signed_dist_to_planeC3(
		ppx.interval(),
		ppy.interval(),
		ppz.interval(),
		pqx.interval(),
		pqy.interval(),
		pqz.interval(),
		prx.interval(),
		pry.interval(),
		prz.interval(),
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = cmp_signed_dist_to_planeC3(
		ppx.exact(),
		ppy.exact(),
		ppz.exact(),
		pqx.exact(),
		pqy.exact(),
		pqz.exact(),
		prx.exact(),
		pry.exact(),
		prz.exact(),
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_larger_signed_dist_to_planeC3(
     const Filtered_exact<CT,ET> &ppx,
	const Filtered_exact<CT,ET> &ppy,
	const Filtered_exact<CT,ET> &ppz,
	     const Filtered_exact<CT,ET> &pqx,
	const Filtered_exact<CT,ET> &pqy,
	const Filtered_exact<CT,ET> &pqz,
	     const Filtered_exact<CT,ET> &prx,
	const Filtered_exact<CT,ET> &pry,
	const Filtered_exact<CT,ET> &prz,
	     const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	     const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = has_larger_signed_dist_to_planeC3(
		ppx.interval(),
		ppy.interval(),
		ppz.interval(),
		pqx.interval(),
		pqy.interval(),
		pqz.interval(),
		prx.interval(),
		pry.interval(),
		prz.interval(),
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = has_larger_signed_dist_to_planeC3(
		ppx.exact(),
		ppy.exact(),
		ppz.exact(),
		pqx.exact(),
		pqy.exact(),
		pqz.exact(),
		prx.exact(),
		pry.exact(),
		prz.exact(),
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact());
  }
  return result;
}

template < class CT, class ET >
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_smaller_signed_dist_to_planeC3(
     const Filtered_exact<CT,ET> &ppx,
	const Filtered_exact<CT,ET> &ppy,
	const Filtered_exact<CT,ET> &ppz,
	     const Filtered_exact<CT,ET> &pqx,
	const Filtered_exact<CT,ET> &pqy,
	const Filtered_exact<CT,ET> &pqz,
	     const Filtered_exact<CT,ET> &prx,
	const Filtered_exact<CT,ET> &pry,
	const Filtered_exact<CT,ET> &prz,
	     const Filtered_exact<CT,ET> &px,
	const Filtered_exact<CT,ET> &py,
	const Filtered_exact<CT,ET> &pz,
	     const Filtered_exact<CT,ET> &qx,
	const Filtered_exact<CT,ET> &qy,
	const Filtered_exact<CT,ET> &qz)
{
  bool result;
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    result = has_smaller_signed_dist_to_planeC3(
		ppx.interval(),
		ppy.interval(),
		ppz.interval(),
		pqx.interval(),
		pqy.interval(),
		pqz.interval(),
		prx.interval(),
		pry.interval(),
		prz.interval(),
		px.interval(),
		py.interval(),
		pz.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval());
    FPU_set_cw(backup);
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    result = has_smaller_signed_dist_to_planeC3(
		ppx.exact(),
		ppy.exact(),
		ppz.exact(),
		pqx.exact(),
		pqy.exact(),
		pqz.exact(),
		prx.exact(),
		pry.exact(),
		prz.exact(),
		px.exact(),
		py.exact(),
		pz.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact());
  }
  return result;
}

#ifdef CGAL_ARITHMETIC_FILTER_H
#ifndef CGAL_ARITHMETIC_FILTER_ARITHMETIC_FILTER_PREDICATES_ON_FTC3_H
#include <CGAL/Arithmetic_filter/predicates_on_ftC3.h>
#endif // CGAL_ARITHMETIC_FILTER_ARITHMETIC_FILTER_PREDICATES_ON_FTC3_H
#endif


CGAL_END_NAMESPACE

#endif // CGAL_ARITHMETIC_FILTER_PREDICATES_ON_FTC3_H

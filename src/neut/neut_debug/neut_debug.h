/* This file is part of the Neper software package. */
/* Copyright (C) 2003-2017, Romain Quey. */
/* See the COPYING file in the top-level directory. */

#ifdef __cplusplus
extern "C"
{
#endif

/// \file neut_debug.h
/// \brief Print out structure contents for debugging
/// \details The functions enables to print out information contained in
/// structures in a human-friendly format
/// \author Romain Quey
/// \bug No known bugs

#ifndef NEUT_DEBUG_H
#define NEUT_DEBUG_H

  extern void neut_debug_nodes (FILE *, struct NODES);
  extern void neut_debug_mesh (FILE *, struct MESH);
  extern void neut_debug_nset (FILE *, struct NSET);
  extern void neut_debug_tess (FILE *, struct TESS);
  extern void neut_debug_seedset (FILE *, struct SEEDSET);
  extern void neut_debug_tessdata (FILE *, struct TESSDATA);
  extern void neut_debug_poly (FILE *, struct POLY);
  extern void neut_debug_polymod (FILE *, struct POLYMOD);

  extern void neut_debug_nodes_name (char *, struct NODES);
  extern void neut_debug_mesh_name (char *, struct MESH);
  extern void neut_debug_nset_name (char *, struct NSET);
  extern void neut_debug_tess_name (char *, struct TESS);
  extern void neut_debug_seedset_name (char *, struct SEEDSET);
  extern void neut_debug_tessdata_name (char *, struct TESSDATA);
  extern void neut_debug_poly_name (char *, struct POLY);
  extern void neut_debug_polymod_name (char *, struct POLYMOD);

  extern void neut_debug_meshdata (FILE * file, struct MESHDATA MeshData);
  extern void neut_debug_meshdata_name (char *filename, struct MESHDATA
					MeshData);

  extern void neut_debug_multim (FILE * file, struct MULTIM Multim);
  extern void neut_debug_tesr (FILE * file, struct TESR Tesr);

#endif				/* NEUT_DEBUG_H */

#ifdef __cplusplus
}
#endif

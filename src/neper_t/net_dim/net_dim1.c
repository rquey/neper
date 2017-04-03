/* This file is part of the Neper software package. */
/* Copyright (C) 2003-2017, Romain Quey. */
/* See the COPYING file in the top-level directory. */

#include"net_dim_.h"

void
net_dim (int dim, struct TESS *pTess)
{
  int id, status;
  struct TESS T2;

  neut_tess_set_zero (&T2);

  if (dim != 2)
    ut_error_reportbug ();

  status = neut_tess_domface_label_id (*pTess, "z0", &id);

  if (status != 0)
    ut_error_reportbug ();

  neut_tess_domface_tess (*pTess, id, &T2);

  neut_tess_tess (T2, pTess);

#ifdef DEVEL_DEBUGGING_TEST
  if (neut_tess_test (*pTess, 0) != 0 || neut_tess_test_dom (*pTess, 0) != 0)
    ut_print_message (2, 2, "The tessellation is not valid.\n");
#endif

  return;
}

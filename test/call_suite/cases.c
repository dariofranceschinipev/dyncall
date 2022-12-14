/*

 Package: dyncall
 Library: test
 File: test/call_suite/cases.c
 Description: 
 License:

   Copyright (c) 2011-2018 Daniel Adler <dadler@uni-goettingen.de>,
                           Tassilo Philipp <tphilipp@potion-studios.com>

   Permission to use, copy, modify, and distribute this software for any
   purpose with or without fee is hereby granted, provided that the above
   copyright notice and this permission notice appear in all copies.

   THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
   WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
   MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
   ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
   WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
   ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
   OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

*/

#include "globals.h"

#define ret_v(X) 
#define ret_B(X) return(K_B[X]);
#define ret_c(X) return(K_c[X]);
#define ret_s(X) return(K_s[X]);
#define ret_i(X) return(K_i[X]);
#define ret_j(X) return(K_j[X]);
#define ret_l(X) return(K_l[X]);
#define ret_C(X) return(K_C[X]);
#define ret_S(X) return(K_S[X]);
#define ret_I(X) return(K_I[X]);
#define ret_J(X) return(K_J[X]);
#define ret_L(X) return(K_L[X]);
#define ret_p(X) return(K_p[X]);
#define ret_f(X) return(K_f[X]);
#define ret_d(X) return(K_d[X]);

#define v void
#define X(CH,T) typedef T CH;
DEF_TYPES
#undef X

#include "cases.h"

int G_ncases = sizeof(G_sigtab)/sizeof(G_sigtab[0]);


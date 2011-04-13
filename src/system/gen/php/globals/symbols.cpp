/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <php/globals/symbols.h>
#include <php/globals/symbols.fws.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
Variant pm_php$$globals$$symbols$_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */, Globals *globals /* = get_globals() */) {
  PSEUDOMAIN_INJECTION_BUILTIN(run_init::globals/symbols.php, pm_php$$globals$$symbols$_php);
  LVariableTable *gVariables __attribute__((__unused__)) = (LVariableTable *)g;
  Variant &v_argc __attribute__((__unused__)) = g->GV(argc);
  Variant &v_argv __attribute__((__unused__)) = g->GV(argv);
  Variant &v__SERVER __attribute__((__unused__)) = g->GV(_SERVER);
  Variant &v__GET __attribute__((__unused__)) = g->GV(_GET);
  Variant &v__POST __attribute__((__unused__)) = g->GV(_POST);
  Variant &v__COOKIE __attribute__((__unused__)) = g->GV(_COOKIE);
  Variant &v__FILES __attribute__((__unused__)) = g->GV(_FILES);
  Variant &v__ENV __attribute__((__unused__)) = g->GV(_ENV);
  Variant &v__REQUEST __attribute__((__unused__)) = g->GV(_REQUEST);
  Variant &v__SESSION __attribute__((__unused__)) = g->GV(_SESSION);
  Variant &v_HTTP_RAW_POST_DATA __attribute__((__unused__)) = g->GV(HTTP_RAW_POST_DATA);
  Variant &v_http_response_header __attribute__((__unused__)) = g->GV(http_response_header);

  setNull(v_argc);
  setNull(v_argv);
  setNull(v__SERVER);
  setNull(v__GET);
  setNull(v__POST);
  setNull(v__COOKIE);
  setNull(v__FILES);
  setNull(v__ENV);
  setNull(v__REQUEST);
  setNull(v__SESSION);
  v__SERVER = s_sys_sa00000000;
  v__GET = s_sys_sa00000000;
  v__POST = s_sys_sa00000000;
  v__COOKIE = s_sys_sa00000000;
  v__FILES = s_sys_sa00000000;
  v__ENV = s_sys_sa00000000;
  v__REQUEST = s_sys_sa00000000;
  v__SESSION = s_sys_sa00000000;
  setNull(v_HTTP_RAW_POST_DATA);
  setNull(v_http_response_header);
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}

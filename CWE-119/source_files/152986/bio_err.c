/* crypto/bio/bio_err.c */
/* ====================================================================
 * Copyright (c) 1999-2011 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */
/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */
#include <stdio.h>
#include <openssl/err.h>
#include <openssl/bio.h>
/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR
#define ERR_FUNC(func) ERR_PACK(ERR_LIB_BIO,func,0)
#define ERR_REASON(reason) ERR_PACK(ERR_LIB_BIO,0,reason)
#include <string.h> 
#include <sys/stat.h> 
#include <stonesoup/stonesoup_trace.h> 
static ERR_STRING_DATA BIO_str_functs[] = {{((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )100) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("ACPT_STATE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )101) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_accept")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )102) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_BER_GET_HEADER")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )131) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_callback_ctrl")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )103) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_ctrl")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )120) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_gethostbyname")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )104) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_gets")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )105) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_accept_socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )106) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_host_ip")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )107) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_port")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )121) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_MAKE_PAIR")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )108) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )109) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new_file")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )126) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new_mem_buf")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )123) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nread")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )124) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nread0")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )125) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nwrite")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )122) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nwrite0")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )110) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_puts")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )111) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_read")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )112) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_sock_init")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )113) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_write")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )114) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BUFFER_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )127) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("CONN_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )115) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("CONN_STATE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )132) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("DGRAM_SCTP_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )116) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("FILE_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )130) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("FILE_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )129) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("LINEBUFFER_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )128) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("MEM_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )117) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("MEM_WRITE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )118) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("SSL_new")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )119) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("WSASTARTUP")}, {(0), (((void *)0))}};
static ERR_STRING_DATA BIO_str_reasons[] = {{((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )100) & 0xfffL), ("accept error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )101) & 0xfffL), ("bad fopen mode")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )102) & 0xfffL), ("bad hostname lookup")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )124) & 0xfffL), ("broken pipe")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )103) & 0xfffL), ("connect error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )127) & 0xfffL), ("EOF on memory BIO")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )104) & 0xfffL), ("error setting nbio")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )105) & 0xfffL), ("error setting nbio on accepted socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )106) & 0xfffL), ("error setting nbio on accept socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )107) & 0xfffL), ("gethostbyname addr is not af inet")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )125) & 0xfffL), ("invalid argument")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )108) & 0xfffL), ("invalid ip address")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )123) & 0xfffL), ("in use")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )109) & 0xfffL), ("keepalive")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )110) & 0xfffL), ("nbio connect error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )111) & 0xfffL), ("no accept port specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )112) & 0xfffL), ("no hostname specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )113) & 0xfffL), ("no port defined")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )114) & 0xfffL), ("no port specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )128) & 0xfffL), ("no such file")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )115) & 0xfffL), ("null parameter")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )116) & 0xfffL), ("tag mismatch")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )117) & 0xfffL), ("unable to bind socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )118) & 0xfffL), ("unable to create socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )119) & 0xfffL), ("unable to listen socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )120) & 0xfffL), ("uninitialized")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )121) & 0xfffL), ("unsupported method")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )126) & 0xfffL), ("write to read only BIO")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )122) & 0xfffL), ("WSAStartup")}, {(0), (((void *)0))}};
#endif
int info_mesomeric = 0;
int stonesoup_global_variable;

struct joebush_emetatrophia 
{
  char *hydropneumatic_integration;
  double imerina_shallop;
  char *onionet_hypercycle;
  char radioconductor_langka;
  int inofficiously_eupatrids;
}
;
void* stonesoup_printf_context = NULL;
void stonesoup_setup_printf_context() {
    struct stat st = {0};
    char * ss_tc_root = NULL;
    char * dirpath = NULL;
    int size_dirpath = 0;
    char * filepath = NULL;
    int size_filepath = 0;
    int retval = 0;
    ss_tc_root = getenv("SS_TC_ROOT");
    if (ss_tc_root != NULL) {
        size_dirpath = strlen(ss_tc_root) + strlen("testData") + 2;
        dirpath = (char*) malloc (size_dirpath * sizeof(char));
        if (dirpath != NULL) {
            sprintf(dirpath, "%s/%s", ss_tc_root, "testData");
            retval = 0;
            if (stat(dirpath, &st) == -1) {
                retval = mkdir(dirpath, 0700);
            }
            if (retval == 0) {
                size_filepath = strlen(dirpath) + strlen("logfile.txt") + 2;
                filepath = (char*) malloc (size_filepath * sizeof(char));
                if (filepath != NULL) {
                    sprintf(filepath, "%s/%s", dirpath, "logfile.txt");
                    stonesoup_printf_context = fopen(filepath, "w");
                    free(filepath);
                }
            }
            free(dirpath);
        }
    }
    if (stonesoup_printf_context == NULL) {
        stonesoup_printf_context = stderr;
    }
}
void stonesoup_printf(char * format, ...) {
    va_list argptr;
    va_start(argptr, format);
    vfprintf(stonesoup_printf_context, format, argptr);
    va_end(argptr);
    fflush(stonesoup_printf_context);
}
void stonesoup_close_printf_context() {
    if (stonesoup_printf_context != NULL &&
        stonesoup_printf_context != stderr) {
        fclose(stonesoup_printf_context);
    }
}
struct joebush_emetatrophia cistae_staver(struct joebush_emetatrophia etas_igname);
void checkstone_sarcocystidean(struct joebush_emetatrophia glucolipine_milkshop);
int stonesoup_toupper(int c)
{
  if (c >= 97 && c <= 122) {
    return c - 32;
  }
  return c;
}

void ERR_load_BIO_strings()
{
  void (*reshowing_karynne)(struct joebush_emetatrophia ) = checkstone_sarcocystidean;
  struct joebush_emetatrophia jamshyd_tind = {0};
  struct joebush_emetatrophia swisser_polska;
  char *tetrapturus_rondellier;;
  if (__sync_bool_compare_and_swap(&info_mesomeric,0,1)) {;
    if (mkdir("/opt/stonesoup/workspace/lockDir",509U) == 0) {;
      tracepoint(stonesoup_trace,trace_location,"/tmp/tmpzpGIqb_ss_testcase/src-rose/crypto/bio/bio_err.c","ERR_load_BIO_strings");
      stonesoup_setup_printf_context();
      tetrapturus_rondellier = getenv("ADRENERGIC_WULLAWINS");
      if (tetrapturus_rondellier != 0) {;
        swisser_polska . hydropneumatic_integration = ((char *)tetrapturus_rondellier);
        jamshyd_tind = cistae_staver(swisser_polska);
        reshowing_karynne(jamshyd_tind);
      }
    }
  }
  ;
#ifndef OPENSSL_NO_ERR
  if (ERR_func_error_string(BIO_str_functs[0] . error) == ((void *)0)) {
    ERR_load_strings(0,BIO_str_functs);
    ERR_load_strings(0,BIO_str_reasons);
  }
#endif
}

struct joebush_emetatrophia cistae_staver(struct joebush_emetatrophia etas_igname)
{
  ++stonesoup_global_variable;
  return etas_igname;
}

void checkstone_sarcocystidean(struct joebush_emetatrophia glucolipine_milkshop)
{
    int stonesoup_i = 0;
    int stonesoup_buff_size = 63;
    int stonesoup_taint_len;
    char *stonesoup_heap_buff_64 = 0;
  char *whitherwards_feedway = 0;
  ++stonesoup_global_variable;;
  whitherwards_feedway = ((char *)glucolipine_milkshop . hydropneumatic_integration);
    tracepoint(stonesoup_trace, weakness_start, "CWE124", "B", "Buffer Underwrite");
    tracepoint(stonesoup_trace, variable_signed_integral, "stonesoup_i", stonesoup_i, &stonesoup_i, "INITIAL-STATE");
    tracepoint(stonesoup_trace, variable_signed_integral, "stonesoup_buff_size", stonesoup_buff_size, &stonesoup_buff_size, "INITIAL-STATE");
    stonesoup_heap_buff_64 = (char*) malloc(64 * sizeof(char));
    if (stonesoup_heap_buff_64 != NULL) {
        memset(stonesoup_heap_buff_64, 'A' ,64);
        stonesoup_heap_buff_64[64 - 1] = '\0';
        tracepoint(stonesoup_trace, variable_buffer, "stonesoup_heap_buff_64", stonesoup_heap_buff_64, "INITIAL-STATE");
        tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: BEFORE");
        tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: BEFORE");
        stonesoup_taint_len = ((int )(strlen(whitherwards_feedway)));
        for (; stonesoup_taint_len >= 0; (--stonesoup_buff_size , --stonesoup_taint_len)) {
    /* STONESOUP: CROSSOVER-POINT (Buffer Underwrite) */
    /* STONESOUP: TRIGGER-POINT (Buffer Underwrite: Heap Underflow) */
            stonesoup_heap_buff_64[stonesoup_buff_size] = whitherwards_feedway[stonesoup_taint_len];
        }
        tracepoint(stonesoup_trace, variable_buffer, "stonesoup_heap_buff_64", stonesoup_heap_buff_64, "CROSSOVER-STATE");
        for (; stonesoup_i < 64; ++stonesoup_i) {
            stonesoup_heap_buff_64[stonesoup_i] = stonesoup_toupper(stonesoup_heap_buff_64[stonesoup_i]);
        }
        tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: AFTER");
        tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: AFTER");
        stonesoup_printf("%s\n",&(stonesoup_heap_buff_64[stonesoup_buff_size+1]));
        free(stonesoup_heap_buff_64);
        tracepoint(stonesoup_trace, variable_signed_integral, "stonesoup_i", stonesoup_i, &stonesoup_i, "FINAL-STATE");
        tracepoint(stonesoup_trace, variable_buffer, "stonesoup_heap_buff_64", stonesoup_heap_buff_64, "FINAL-STATE");
        tracepoint(stonesoup_trace, weakness_end);
    }
;
stonesoup_close_printf_context();
}

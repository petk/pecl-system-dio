/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt.                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
 */

#ifndef PHP_DIO_H
#define PHP_DIO_H

#include "php.h"
#include "php_dio_common.h"
#include "php_dio_stream_wrappers.h"

extern zend_module_entry dio_module_entry;
#define phpext_dio_ptr &dio_module_entry

#define PHP_DIO_VERSION "0.2.1"

/* Standard module functions. */
PHP_MINIT_FUNCTION(dio);
PHP_MSHUTDOWN_FUNCTION(dio);
PHP_RINIT_FUNCTION(dio);
PHP_RSHUTDOWN_FUNCTION(dio);
PHP_MINFO_FUNCTION(dio);

/* Legacy functions. */
PHP_FUNCTION(dio_open);
PHP_FUNCTION(dio_truncate);
PHP_FUNCTION(dio_stat);
PHP_FUNCTION(dio_seek);
PHP_FUNCTION(dio_read);
PHP_FUNCTION(dio_write);
PHP_FUNCTION(dio_fcntl);
PHP_FUNCTION(dio_close);
PHP_FUNCTION(dio_tcsetattr);

typedef struct {
	int fd;
} php_fd_t;

#endif


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

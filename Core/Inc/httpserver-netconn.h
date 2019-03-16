/*
 * httpserver-netconn.h
 *
 *  Created on: Mar 16, 2019
 *      Author: statu
 */

#ifndef __HTTPSERVER_NETCONN_H__
#define __HTTPSERVER_NETCONN_H__

void http_server_netconn_init(void);
void DynWebPage(struct netconn *conn);

#endif /* __HTTPSERVER_NETCONN_H__ */

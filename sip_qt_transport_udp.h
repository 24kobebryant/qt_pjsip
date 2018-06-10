#pragma once

// ����QT��sip transport�㣬����ο�sip_transport_udp.h/cpp��Դ��

#include "pj/types.h"
struct pjsip_endpoint;
struct pjsip_transport;
struct qt_sip_udp_transport;
/*
* @brief ����һ��pjsip��udp�˿�
* @param endpt pjsip��Ӧ��endpt
* @param port ��Ҫ������udp�˿�
* @param p_transport ���صĶ˿�
*/
PJ_DECL(pj_status_t) qt_sip_transport_create(const int port, pjsip_endpoint* endpt, qt_sip_udp_transport** ptp);

/*
* @brief ����һ��pjsip��udp�˿�
* @param endpt pjsip��Ӧ��endpt
* @param port ��Ҫ������udp�˿�
* @param p_transport ���صĶ˿�
*/
void qt_sip_transport_destroy(qt_sip_udp_transport **tp);
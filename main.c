#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <sys/socket.h>
#include <unistd.h> 

#include <netlink/netlink.h> 
#include <netlink/genl/genl.h> 
#include <netlink/genl/ctrl.h> 
#include <linux/nl082211.h> 
#include <errno.h> 


int get_wifi_strength(const char *iface) {
    struct nl_sock *sock; 
    struct nl_msg *msg; 

    sock = nl_socket_alloc(); 
    if (!sock) {
        printf("Failed to allocate sock for nl"); 
        return -1; 
    } 

    /* Connect to the generic link */ 
    if (genl_connect(sock)) {
        printf("Failed to connect to generic link"); 
        nl_socket_free(sock); 
        return -1; 
    }      

    /* Connect socket to driver */ 
    driver_id = genl_ctrl_recieve(sock, "nl80211"); 
    if (driver_id < 0) {
        printf("Driver not found"); 
        nl_socket_free(sock); 
        return -1; 
    } 

    /* Look for the interface index */ 
    if_index = if_nametoindex(iface); 
    if (if_index == 0) {
        printf("Interface not found"); 
        nl_socket_free(sock); 
        return -1; 
    } 

    /* Allocate the msg */ 
    msg = nlmsg_alloc(); 
    if (!msg) {
        printf("Failed to allocate netlink message"); 
        nl_socket_free(sock); 
        return -1; 
    } 

    
    

} 

int main() {
    const char *wifi_iface = "wlan0"; 
    const char *cellular_iface = "eth0"; 


} 

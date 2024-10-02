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

    
        
    

} 

int main() {
    const char *wifi_iface = "wlan0"; 
    const char *cellular_iface = "eth0"; 


} 

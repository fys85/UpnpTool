#include <iostream>
#include "upnpmapper.h"
using namespace std;

int main()
{
    xop::EventLoop eventloop(1);
    std::thread t(std::bind(&xop::EventLoop::loop,&eventloop));
    t.detach();
    upnp::UpnpMapper::Instance().Init(&eventloop,"192.168.2.3");
    xop::Timer::sleep(1000);
    upnp::UpnpMapper::Instance().Api_addportMapper(upnp::SOCKET_TCP,"192.168.2.111",8557,5890,"upnp_test",nullptr);
//    upnp::UpnpMapper::Instance().Api_addportMapper(upnp::SOCKET_UDP,"192.168.2.111",8558,5891,"upnp_test",nullptr);
//    upnp::UpnpMapper::Instance().Api_addportMapper(upnp::SOCKET_UDP,"192.168.2.111",8559,5892,"upnp_test",nullptr);
//    upnp::UpnpMapper::Instance().Api_addportMapper(upnp::SOCKET_UDP,"192.168.2.111",8560,8560,"upnp_test",nullptr);
    upnp::UpnpMapper::Instance().Api_GetSpecificPortMappingEntry(upnp::SOCKET_TCP,5890,nullptr);
    upnp::UpnpMapper::Instance().Api_GetNewexternalIP(nullptr);
    string test="test";
    upnp::SOCKET_TYPE type=upnp::SOCKET_TCP;
    int port=5890;
    auto func=[test,type,port](bool status){
        string s_type="UDP";
        if(type==upnp::SOCKET_TCP)s_type="TCP";
        if(status)
        {
            cout<<"delete "<<s_type<<":"<<port<<"success!"<<endl;
        }
        else {
            cout<<"delete "<<s_type<<":"<<port<<"fail!"<<endl;
        }
    };
//    upnp::UpnpMapper::Instance().Api_deleteportMapper(type,port,func);
//    upnp::UpnpMapper::Instance().Api_deleteportMapper(upnp::SOCKET_TCP,5892,nullptr);
    while(getchar()!='8')continue;
    return 0;
}

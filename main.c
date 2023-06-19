#include <stdio.h>
#include <stdint.h>
#include <plugins.h>
#include <stdbool.h>
#include "shadows.h"
#include <orbis/libkernel.h>
#define db 0x003FC000
struct proc_info procInfo;
struct proc_rw datawrite;
OrbisPthread engine;
char auth[16];
unsigned char verid1[1]={0};
unsigned char verid2[1]={0};
unsigned char verid3[1]={0};
void procrw(u64 cd,void *dw,u64 s,u64 flag){
datawrite.address=cd+db;
datawrite.data=dw;
datawrite.length=s;
datawrite.write_flags=flag;
sys_sdk_proc_rw(&datawrite);}
void *spectrengine(void *args){
procrw(0x031419C4,verid1,1,0);
procrw(0x031419C8,verid2,1,0);
procrw(0x031419CA,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='0'&&verid3[0]=='0'){
procrw(0x0142EB73,SK100A,701,1);
procrw(0x012FED77,SK100B,425,1);
procrw(0x01B29098,SK100C,302,1);
procrw(0x03204918,SK100D,300,1);
procrw(0x02F1B060,SK100E,21,1);
procrw(0x012FEB2F,SK100F,7,1);
procrw(0x0282D059,SK100G,7,1);
procrw(0x0282D060,SK100G,7,1);
procrw(0x02833DA9,SK100G,7,1);
procrw(0x02833DB0,SK100G,7,1);
procrw(0x02833E16,SK100G,7,1);
procrw(0x02833E1D,SK100G,7,1);
procrw(0x01826D04,SK100H,3,1);
procrw(0x01B27D66,SK100J,2,1);
procrw(0x0142FB29,SK100K,2,1);
procrw(0x0142FB3A,SK100L,2,1);
procrw(0x01CCC7D7,SK100M,2,1);
procrw(0x020F29C7,SK100N,2,1);
procrw(0x0216B0E6,SK100O,2,1);
procrw(0x0216B9A6,SK100P,2,1);
procrw(0x0216BF32,SK100Q,2,1);
procrw(0x0216C1F6,SK100R,2,1);
procrw(0x0216C4C3,SK100S,2,1);
procrw(0x022A333E,SK100T,2,1);
procrw(0x023365B1,SK100U,2,1);
procrw(0x023FE829,SK100V,2,1);
procrw(0x02833AB8,SK100W,2,1);
procrw(0x0208C7F8,SK100X,2,1);
procrw(0x0208CD3A,SK100Y,2,1);
procrw(0x0208CE3D,SK100Z,2,1);
procrw(0x02833AD3,SK100I,2,1);
procrw(0x02102379,SK10A0,1,1);
procrw(0x02336597,SK10B0,1,1);
procrw(0x0216C790,SK10C0,1,1);
procrw(0x022A2F8C,SK10D0,1,1);
procrw(0x022A3059,SK10E0,1,1);
procrw(0x0216BC6C,SK10F0,1,1);
procrw(0x0055EF75,SK10G0,1,1);
procrw(0x0055EF85,SK10C0,1,1);
procrw(0x005BC490,SK10H0,1,1);
procrw(0x01DB09AA,SK10J0,1,1);
procrw(0x0142EE5E,SK10K0,1,1);
procrw(0x0142EB0B,SK10L0,1,1);
procrw(0x0142EA78,SK10M0,1,1);
procrw(0x01432AD9,SK10N0,1,1);
procrw(0x0142FB2E,SK10O0,1,1);
procrw(0x01432AFE,SK10P0,1,1);
procrw(0x0142FB3F,SK10Q0,1,1);
procrw(0x01432B2A,SK10F0,1,1);
procrw(0x01430AFB,SK10R0,1,1);
procrw(0x012FF414,SK10S0,1,1);
procrw(0x012FEC25,SK10T0,1,1);
procrw(0x01DB5417,SK10U0,1,1);}
scePthreadExit(NULL);
return NULL;}
int32_t attr_module_hidden module_start(size_t argc,const void *args){
if(sys_sdk_proc_info(&procInfo)){return 0;}
memcpy(auth, procInfo.titleid, sizeof(auth));
if(auth[4]=='1'&&auth[5]=='2'&&auth[6]=='0'&&auth[7]=='4'&&auth[8]=='7'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='1'&&auth[5]=='3'&&auth[6]=='8'&&auth[7]=='0'&&auth[8]=='1'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='1'&&auth[5]=='3'&&auth[6]=='9'&&auth[7]=='0'&&auth[8]=='9'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='1'&&auth[5]=='3'&&auth[6]=='9'&&auth[7]=='1'&&auth[8]=='0'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}}}}
return 0;}
int32_t attr_module_hidden module_stop(size_t argc,const void *args){
return 0;}
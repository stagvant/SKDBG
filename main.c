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
void* spectrengine(void* args){
procrw(0x031419C4,verid1,1,0);
procrw(0x031419C8,verid2,1,0);
procrw(0x031419CA,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='0'&&verid3[0]=='0'){
procrw(0x0142EB73,SK100A,701,1);
procrw(0x03204A09,SK100B,61,1);
procrw(0x02F1B060,SK100C,21,1);
procrw(0x01826D04,SK100D,3,1);
procrw(0x0142FB29,SK100E,2,1);
procrw(0x0142FB3A,SK100F,2,1);
procrw(0x0142EE5E,SK100G,1,1);
procrw(0x0142EB0B,SK100H,1,1);
procrw(0x0142EA78,SK100J,1,1);
procrw(0x01432AD9,SK100K,1,1);
procrw(0x0142FB2E,SK100L,1,1);
procrw(0x01432AFE,SK100M,1,1);
procrw(0x0142FB3F,SK100N,1,1);
procrw(0x01432B2A,SK100O,1,1);
procrw(0x01430AFB,SK100P,1,1);
procrw(0x01DB5417,SK100Q,1,1);}
scePthreadExit(NULL);
return NULL;}
int32_t attr_module_hidden module_start(size_t argc,const void *args){
if (sys_sdk_proc_info(&procInfo)){return 0;}
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
int32_t attr_module_hidden module_stop(size_t argc, const void *args){
return 0;}
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface DBWidgetProcess : NSObject
{
    int _pid;
    NSMutableArray *_widgets;
    NSMutableArray *_widgetsToLaunch;
    NSMutableSet *_widgetBundleIds;
    unsigned int _server_port;
    unsigned int _client_port;
    struct __CFRunLoopSource *_server_source;
    unsigned int _client_cid;
    struct CPSProcessSerNum _psn;
    double _last_relaunch;
    unsigned int _relaunch_count;
    float _scaleFactor;
    unsigned int _running:1;
    unsigned int _has_plugin:1;
    unsigned int _has_apple:1;
    unsigned int _exiting:1;
    unsigned int _should_run_32_bit:1;
}

@property(readonly, nonatomic) BOOL shouldRun32Bit; // @synthesize shouldRun32Bit=_should_run_32_bit;
@property(readonly, nonatomic) BOOL hasApple; // @synthesize hasApple=_has_apple;
@property(readonly, nonatomic) BOOL hasPlugin; // @synthesize hasPlugin=_has_plugin;
@property(readonly, nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) BOOL exiting; // @synthesize exiting=_exiting;
@property(readonly, nonatomic) struct CPSProcessSerNum psn; // @synthesize psn=_psn;
@property(readonly, nonatomic) unsigned int cid; // @synthesize cid=_client_cid;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned int relaunchCount; // @synthesize relaunchCount=_relaunch_count;
@property(nonatomic) double lastRelaunchTime; // @synthesize lastRelaunchTime=_last_relaunch;
@property(readonly, nonatomic) BOOL running; // @synthesize running=_running;
- (void).cxx_destruct;
- (unsigned int)_exitIfPossible;
- (int)_getWidgetToRunFirstTime:(unsigned int)arg1 processPort:(unsigned int *)arg2 widgetPath:(char [1024])arg3 uniqueID:(char [16])arg4 wid:(unsigned int *)arg5 isManager:(unsigned int *)arg6 clientPort:(unsigned int *)arg7 serverPort:(unsigned int *)arg8 urlData:(const char **)arg9 urlDataCnt:(unsigned int *)arg10 urlDataInline:(char [4096])arg11 urlDataInlineCnt:(unsigned int *)arg12 more:(unsigned int *)arg13;
- (int)_getWidgetToRun:(unsigned int)arg1 widgetPath:(char [1024])arg2 uniqueID:(char [16])arg3 wid:(unsigned int *)arg4 isManager:(unsigned int *)arg5 clientPort:(unsigned int *)arg6 serverPort:(unsigned int *)arg7 urlData:(const char **)arg8 urlDataCnt:(unsigned int *)arg9 urlDataInline:(char [4096])arg10 urlDataInlineCnt:(unsigned int *)arg11 more:(unsigned int *)arg12;
- (id)widgetAtIndex:(unsigned long long)arg1;
- (_Bool)containsWidgetWithBundleID:(id)arg1;
- (void)stopAllTransactions;
- (id)split:(BOOL)arg1 checkForAppleWidgets:(BOOL)arg2;
- (void)cleanupWidgetsForRelaunch:(BOOL)arg1;
- (BOOL)pingOrSpawn;
- (void)kill;
- (BOOL)spawn;
- (const char *)launchPath;
- (char **)envpForSpawn;
- (char **)argvForSpawn;
- (void)ping;
- (void)removeWidget:(id)arg1;
- (void)addWidget:(id)arg1 checkForAppleWidget:(BOOL)arg2;
@property(readonly, nonatomic) unsigned long long widgetCount; // @dynamic widgetCount;
- (void)dealloc;
- (id)initBackgrounded:(BOOL)arg1;

@end


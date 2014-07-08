//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CHLoggerProtocol.h"

@interface CHLogger : NSObject <CHLoggerProtocol>
{
    struct StaticLogger _logger;
}

+ (void)logDebugOnce:(id)arg1 withFormat:(id)arg2;
+ (void)logInfoOnce:(id)arg1 withFormat:(id)arg2;
+ (void)logNoticeOnce:(id)arg1 withFormat:(id)arg2;
+ (void)logWarnOnce:(id)arg1 withFormat:(id)arg2;
+ (void)logErrorOnce:(id)arg1 withFormat:(id)arg2;
+ (unsigned char)convertStringToLogLevel:(id)arg1;
+ (void)logWithLevel:(unsigned char)arg1 logger:(LoggerBase_f7398810 *)arg2 format:(id)arg3 argList:(struct __va_list_tag [1])arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)logDebug:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)logInfo:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)logNotice:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)logWarn:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)logError:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)logDebug:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logNotice:(id)arg1;
- (void)logWarn:(id)arg1;
- (void)logError:(id)arg1;
- (id)initWithDomain:(id)arg1;

@end


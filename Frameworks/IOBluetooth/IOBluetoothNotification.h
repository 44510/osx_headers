//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IOBluetoothNotification : NSObject
{
    CDUnknownFunctionPointerType mCallback;
    void *mUserRefCon;
    unsigned int mClass;
    unsigned int mSubClass;
}

+ (id)notificationWithClass:(unsigned int)arg1 subClass:(unsigned int)arg2 callback:(CDUnknownFunctionPointerType)arg3 userRefCon:(void *)arg4;
- (void)invokeCallbackWithData:(const void *)arg1 dataSize:(unsigned long long)arg2 class:(unsigned int)arg3 subClass:(unsigned int)arg4;
- (void)dealloc;
- (void)setClass:(unsigned int)arg1 subClass:(unsigned int)arg2 callback:(CDUnknownFunctionPointerType)arg3 userRefCon:(void *)arg4;

@end


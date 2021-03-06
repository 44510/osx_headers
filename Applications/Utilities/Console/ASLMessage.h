//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableDictionary;

@interface ASLMessage : NSObject
{
    unsigned long long _msgID;
    BOOL _isMessageTracer;
    BOOL _isBootMarker;
    long long _time;
    unsigned long long _nanoTime;
    int _pid;
    unsigned char _level;
    long long _cachedColumns;
    long long _cachedLines;
    NSMutableDictionary *_msgDict;
    NSCache *_stringCache;
    BOOL _messageIsDisclosed;
    long long _cachedDisplayStyle;
    BOOL _cachedMessageIsDisclosed;
}

+ (id)builtInTags;
@property BOOL isBootMarker; // @synthesize isBootMarker=_isBootMarker;
@property BOOL messageIsDisclosed; // @synthesize messageIsDisclosed=_messageIsDisclosed;
- (void).cxx_destruct;
- (long long)linesForFullMessageCharacterColumns:(long long)arg1 displayStyle:(long long)arg2;
- (id)_fullMessageLayout;
- (long long)linesForCharacterColumns:(long long)arg1;
- (BOOL)hasTags:(id)arg1;
- (BOOL)isEqualToSender:(id)arg1;
- (BOOL)matchesString:(id)arg1 forKeys:(id)arg2;
- (id)urlUTI;
- (id)urlTitle;
- (id)url;
- (BOOL)hasURL;
- (id)level;
- (id)dateTimeNanoString;
- (id)dateTimeString;
- (id)timeNanoString;
- (id)timeString;
- (BOOL)isToday;
- (id)precisionTime;
- (id)time;
- (BOOL)isMessageTracer;
- (id)senderAndPID;
- (id)pidString;
- (id)pid;
- (id)facility;
- (id)sender;
- (id)host;
- (id)tags;
- (id)tagsArray;
- (id)message;
- (id)marker;
- (void)_extractTags;
- (id)properties;
- (unsigned long long)msgID;
- (id)_stringForCString:(const char *)arg1 fromCache:(id)arg2;
- (id)_stringForString:(id)arg1 fromCache:(id)arg2;
- (id)_createLossyStringForCString:(const char *)arg1;
- (id)initWithMsgStruct:(struct __asl_object_s *)arg1 stringCache:(id)arg2;

@end


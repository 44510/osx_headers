//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDSession, NSString;

@interface CDDevice : NSObject
{
    CDSession *_session;
    unsigned int _identifier;
    NSString *_modelIdentifier;
}

@property(readonly) CDSession *session; // @synthesize session=_session;
@property(readonly) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)requestLogDataWithError:(id *)arg1;
- (id)readLogDataWithError:(id *)arg1;
- (BOOL)setLogDataHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)requestSystemDataWithError:(id *)arg1;
- (id)readSystemDataWithError:(id *)arg1;
- (BOOL)setSystemDataHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDevice:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 error:(id *)arg4;

@end


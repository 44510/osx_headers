//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask
{
}

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end


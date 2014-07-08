//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSSet, NSURL;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask
{
    NSSet *_propertiesToSet;
    BOOL _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
@property(retain, nonatomic) NSSet *propertiesToSet; // @synthesize propertiesToSet=_propertiesToSet;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)description;
- (void)dealloc;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end


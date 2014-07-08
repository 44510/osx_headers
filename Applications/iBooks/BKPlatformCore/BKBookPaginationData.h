//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface BKBookPaginationData : NSObject
{
    NSURL *_bookURL;
    NSURL *_outputDirectoryURL;
    unsigned long long _numberOfPages;
    NSString *_userAgent;
    NSString *_bookName;
    NSURL *_bookOutputDirectoryURL;
}

@property(retain, nonatomic) NSURL *bookOutputDirectoryURL; // @synthesize bookOutputDirectoryURL=_bookOutputDirectoryURL;
@property(retain, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(readonly, retain, nonatomic) NSURL *outputDirectoryURL; // @synthesize outputDirectoryURL=_outputDirectoryURL;
@property(readonly, retain, nonatomic) NSURL *bookURL; // @synthesize bookURL=_bookURL;
- (void).cxx_destruct;
- (void)markAsComplete;
- (BOOL)setImageData:(id)arg1 forPage:(unsigned long long)arg2;
- (id)p_md5StringFromData:(id)arg1;
- (BOOL)p_createDirectoryIfNeeded:(id)arg1 error:(id *)arg2;
- (id)initWithBookURL:(id)arg1 outputDirectoryURL:(id)arg2;

@end


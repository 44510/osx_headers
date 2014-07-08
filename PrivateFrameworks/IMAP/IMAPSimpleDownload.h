//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPDownload.h>

@class MCError, NSMutableData, NSString;

@interface IMAPSimpleDownload : IMAPDownload
{
    NSMutableData *_mdata;
    MCError *_error;
    unsigned int _length:32;
    BOOL _knownLength;
    BOOL _complete;
    unsigned int _bytesFetched;
    NSString *_partSectionSpecifier;
    long long _textSectionSpecifier;
}

@property long long textSectionSpecifier; // @synthesize textSectionSpecifier=_textSectionSpecifier;
@property(retain) NSString *partSectionSpecifier; // @synthesize partSectionSpecifier=_partSectionSpecifier;
- (void).cxx_destruct;
- (void)setError:(id)arg1;
- (id)error;
- (id)data;
- (BOOL)isComplete;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (void)handleFetchResult:(id)arg1;
- (unsigned int)expectedLength;
- (unsigned int)bytesFetched;
- (id)description;
- (id)createCopy;
- (id)initWithUid:(unsigned int)arg1;
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 length:(unsigned int)arg4;
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 estimatedLength:(unsigned int)arg4;

@end


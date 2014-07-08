//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCMutableMessageHeaders, MUIWebDocumentView, NSString;

@interface MFMessageReplyGenerator : NSObject
{
    MUIWebDocumentView *_documentView;
    CDUnknownBlockType _completionHandler;
    NSString *_contentToAdd;
    NSString *_attributionLine;
    MCMutableMessageHeaders *_messageHeaders;
    MFMessageReplyGenerator *_me;
}

@property(retain, nonatomic) MFMessageReplyGenerator *me; // @synthesize me=_me;
@property(retain, nonatomic) MCMutableMessageHeaders *messageHeaders; // @synthesize messageHeaders=_messageHeaders;
@property(copy, nonatomic) NSString *attributionLine; // @synthesize attributionLine=_attributionLine;
@property(copy, nonatomic) NSString *contentToAdd; // @synthesize contentToAdd=_contentToAdd;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) MUIWebDocumentView *documentView; // @synthesize documentView=_documentView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)generateMessageWithType:(unsigned long long)arg1 originalMessage:(id)arg2 newContent:(id)arg3 forwardHeaders:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;

@end


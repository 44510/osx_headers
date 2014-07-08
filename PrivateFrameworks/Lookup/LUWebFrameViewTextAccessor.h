//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Lookup/LUTextAccessor.h>

@class WebFrameView;

@interface LUWebFrameViewTextAccessor : LUTextAccessor
{
    WebFrameView *_webFrameView;
}

+ (id)nextDOMTextNode:(id)arg1;
+ (id)previousDOMTextNode:(id)arg1;
+ (id)paragraphContainingNode:(id)arg1;
+ (id)textContentOfNode:(id)arg1 withRepresentation:(id)arg2;
+ (id)textContentOfRange:(id)arg1 withRepresentation:(id)arg2;
+ (id)DOMRangeFromNSRange:(struct _NSRange)arg1 domNode:(id)arg2 representation:(id)arg3;
+ (struct _NSRange)NSRangeFromDOMRange:(id)arg1 withRepresentation:(id)arg2;
+ (id)WebHTMLViewAtLocation:(struct CGPoint)arg1;
+ (BOOL)canAccessTextInView:(id)arg1;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint)arg1;
@property(retain) WebFrameView *webFrameView; // @synthesize webFrameView=_webFrameView;
- (id)termForRange:(id)arg1 textOrigin:(struct CGPoint *)arg2 language:(id *)arg3 partOfSpeech:(id *)arg4;
- (id)_termAndTextOrigin:(struct CGPoint *)arg1 language:(id *)arg2 partOfSpeech:(id *)arg3;
- (id)_termAtLocation:(struct CGPoint)arg1 textOrigin:(struct CGPoint *)arg2 language:(id *)arg3 partOfSpeech:(id *)arg4;
- (id)initWithView:(id)arg1;
- (id)initWithLocation:(struct CGPoint)arg1;
- (void)dealloc;

@end


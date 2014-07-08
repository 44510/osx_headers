//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BookletFrameLoadDelegate : NSObject
{
    struct BookletJSEventDelegate *mEventDelegate;
    struct weak_ptr<ITWebKitView> mWebKitView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)initWithEventDelegate:(struct BookletJSEventDelegate *)arg1 andWebKitView:(shared_ptr_d496c0d0)arg2;

@end

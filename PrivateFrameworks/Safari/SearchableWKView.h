//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKView.h"

__attribute__((visibility("hidden")))
@interface SearchableWKView : WKView
{
    struct RefPtr<Safari::SearchableWebContentViewController> _contentViewController;
    struct Session _privateBrowsingSession;
}

@property(readonly, nonatomic) struct Session privateBrowsingSession; // @synthesize privateBrowsingSession=_privateBrowsingSession;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL usesPrivateBrowsing;
- (BOOL)isClosed;
- (void)close;
- (void)pageDidClose;
- (struct SearchableWebContentViewController *)contentViewController;
- (PassRefPtr_6e6851a6)createContentViewController;
- (id)initWithFrame:(struct CGRect)arg1 context:(const struct Context *)arg2 pageGroup:(const struct PageGroup *)arg3 relatedToPage:(const struct Page *)arg4 privateBrowsingSession:(const struct Session *)arg5;
- (id)initWithFrame:(struct CGRect)arg1 context:(const struct Context *)arg2 pageGroup:(const struct PageGroup *)arg3 relatedToPage:(const struct Page *)arg4 usePrivateBrowsing:(BOOL)arg5;

@end


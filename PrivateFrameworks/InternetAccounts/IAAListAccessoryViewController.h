//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IAAccount, NSView;

@interface IAAListAccessoryViewController : NSObject
{
    IAAccount *_account;
    NSView *_view;
}

@property(readonly) IAAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)syncUI;
- (id)view;
- (id)initWithAccount:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenField.h"

@class NSString, SSContactsTokenFieldDelegate;

__attribute__((visibility("hidden")))
@interface SSContactsTokenField : NSTokenField
{
    SSContactsTokenFieldDelegate *__delegateInternal;
}

@property(retain) SSContactsTokenFieldDelegate *_delegateInternal; // @synthesize _delegateInternal=__delegateInternal;
@property(readonly) NSString *identifierString;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


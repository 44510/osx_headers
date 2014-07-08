//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AuthenticationPanel, NSButton, NSImageView, NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface AuthenticationDialog : NSObject
{
    AuthenticationPanel *panel;
    NSTextField *mainLabel;
    NSTextField *password;
    NSTextField *smallLabel;
    NSTextField *username;
    NSImageView *imageView;
    NSButton *remember;
    NSTextField *separateRealmLabel;
    struct RefPtr<Safari::AuthenticationSheetRequest> sheetRequest;
    NSLayoutConstraint *_smallLabelToSeparateRealmLabelVerticalSpacingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *smallLabelToSeparateRealmLabelVerticalSpacingConstraint; // @synthesize smallLabelToSeparateRealmLabelVerticalSpacingConstraint=_smallLabelToSeparateRealmLabelVerticalSpacingConstraint;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)runAsSheetOnWindow:(id)arg1;
- (BOOL)loadNib;
- (void)logIn:(id)arg1;
- (void)cancel:(id)arg1;
- (id)initWithSheetRequest:(struct AuthenticationSheetRequest *)arg1;

@end


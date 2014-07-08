//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSDictionary, NSString;

@protocol InternetAccountExports <JSExport>
@property(readonly, nonatomic) NSDictionary *workflow;
@property(retain, nonatomic, getter=icaButtonBar, setter=icaSetButtonBar:) JSValue *buttonBar;
@property(readonly, nonatomic) NSDictionary *account;
@property(readonly, nonatomic) NSDictionary *environment;
@property(readonly, nonatomic) unsigned long long protocolVersion;
- (void)showNativeAddFamilyMember;
- (void)showSpinnerWithLabelOnNativeScreen:(NSString *)arg1;
- (void)openHelp:(NSString *)arg1;
- (void)openExternalURL:(NSString *)arg1;
- (void)getNASToken:(JSValue *)arg1;
- (void)reauthenticate:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)getContactInfoNew:(NSString *)arg1 callback:(JSValue *)arg2 retrieveFromServer:(BOOL)arg3 preferServerVersionToLocal:(BOOL)arg4 dsid:(NSString *)arg5;
- (void)getContactInfo:(NSString *)arg1 callback:(JSValue *)arg2;
- (void)getPhotoForContact:(NSString *)arg1 orFirstName:(NSString *)arg2 orLastName:(NSString *)arg3 callback:(JSValue *)arg4;
- (void)exitWebView:(NSDictionary *)arg1;
- (void)endSheet:(NSDictionary *)arg1;
- (void)beginSheetWithContent:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5;
- (void)beginSheetWithURL:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5;
- (void)webClientDidUpdatePassword:(NSString *)arg1 newPassword:(NSString *)arg2 appleID:(NSString *)arg3;
- (void)refreshView:(NSString *)arg1 section:(NSString *)arg2;
- (void)goToView:(NSString *)arg1 section:(NSString *)arg2;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(JSValue *)arg3;
- (void)showAlert:(NSDictionary *)arg1 callback:(JSValue *)arg2;
- (void)webClientIsReady;
- (void)log:(NSString *)arg1 message:(NSString *)arg2;

@optional
- (void)showSpinnerWithLabelOnNativeScreen:(NSString *)arg1 __JS_EXPORT_AS__showSpinnerWithLabelOnNativeScreen:(id)arg2;
- (void)openHelp:(NSString *)arg1 __JS_EXPORT_AS__openHelp:(id)arg2;
- (void)openExternalURL:(NSString *)arg1 __JS_EXPORT_AS__openExternalURL:(id)arg2;
- (void)getNASToken:(JSValue *)arg1 __JS_EXPORT_AS__getNASToken:(id)arg2;
- (void)reauthenticate:(NSString *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__reauthenticate:(id)arg3;
- (void)getContactInfoNew:(NSString *)arg1 callback:(JSValue *)arg2 retrieveFromServer:(BOOL)arg3 preferServerVersionToLocal:(BOOL)arg4 dsid:(NSString *)arg5 __JS_EXPORT_AS__getContactInfoNew:(id)arg6;
- (void)getContactInfo:(NSString *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__getContactInfo:(id)arg3;
- (void)getPhotoForContact:(NSString *)arg1 orFirstName:(NSString *)arg2 orLastName:(NSString *)arg3 callback:(JSValue *)arg4 __JS_EXPORT_AS__getPhotoForContact:(id)arg5;
- (void)exitWebView:(NSDictionary *)arg1 __JS_EXPORT_AS__exit:(id)arg2;
- (void)endSheet:(NSDictionary *)arg1 __JS_EXPORT_AS__endSheet:(id)arg2;
- (void)beginSheetWithContent:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5 __JS_EXPORT_AS__beginSheetWithContent:(id)arg6;
- (void)beginSheetWithURL:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5 __JS_EXPORT_AS__beginSheetWithURL:(id)arg6;
- (void)webClientDidUpdatePassword:(NSString *)arg1 newPassword:(NSString *)arg2 appleID:(NSString *)arg3 __JS_EXPORT_AS__webClientDidUpdatePassword:(id)arg4;
- (void)refreshView:(NSString *)arg1 section:(NSString *)arg2 __JS_EXPORT_AS__refreshView:(id)arg3;
- (void)goToView:(NSString *)arg1 section:(NSString *)arg2 __JS_EXPORT_AS__goToView:(id)arg3;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(JSValue *)arg3 __JS_EXPORT_AS__resize:(id)arg4;
- (void)showAlert:(NSDictionary *)arg1 callback:(JSValue *)arg2 __JS_EXPORT_AS__showAlert:(id)arg3;
- (void)log:(NSString *)arg1 message:(NSString *)arg2 __JS_EXPORT_AS__log:(id)arg3;
@end

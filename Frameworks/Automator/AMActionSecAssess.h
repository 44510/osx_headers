//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMActionSecAssess : NSObject
{
    BOOL _xprotectSucceeded;
    struct dispatch_semaphore_s *_analyze_sem;
}

+ (BOOL)secAssessAction:(id)arg1 withURL:(id)arg2 error:(id *)arg3;
@property struct dispatch_semaphore_s *analyze_sem; // @synthesize analyze_sem=_analyze_sem;
@property BOOL xprotectSucceeded; // @synthesize xprotectSucceeded=_xprotectSucceeded;
- (void)malwareCheckEnded:(id)arg1 result:(id)arg2 forURL:(id)arg3;
- (BOOL)isActionSignatureInvalid:(id)arg1;
- (BOOL)actionMeetsGatekeeperPolicy:(id)arg1;
- (BOOL)isQuarantined:(id)arg1;
- (BOOL)_secAssessAction:(id)arg1 withURL:(id)arg2 error:(id *)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WBSParsecSearchCompletionResultSet : NSObject
{
    long long _status;
    NSString *_errorCodeString;
    NSString *_completionString;
    NSString *_prefix;
    NSString *_feedbackQueryIdentifier;
    NSArray *_results;
    double _maxAge;
    double _completionScore;
}

+ (id)resultSetWithDictionary:(id)arg1 cache:(id)arg2;
@property(readonly, nonatomic) double completionScore; // @synthesize completionScore=_completionScore;
@property(readonly, nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *feedbackQueryIdentifier; // @synthesize feedbackQueryIdentifier=_feedbackQueryIdentifier;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) NSString *completionString; // @synthesize completionString=_completionString;
@property(readonly, nonatomic) NSString *errorCodeString; // @synthesize errorCodeString=_errorCodeString;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1 cache:(id)arg2;

@end


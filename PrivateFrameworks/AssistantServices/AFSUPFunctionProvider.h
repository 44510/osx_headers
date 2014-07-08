//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistantServices/AFSpeakableUtteranceParser.h>

#import "AFSpeakableNamespaceProvider.h"

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider>
{
    NSDateFormatter *_ourFormatter;
    BOOL _useSpeechMode;
}

+ (BOOL)_shouldAutomaticallyProvideFunctions;
- (void).cxx_destruct;
- (id)stringForExpression:(id)arg1;
- (id)_callFunction:(id)arg1 withArguments:(id)arg2;
- (id)_deviceModel;
- (id)_lowercaseString:(id)arg1;
- (id)_tempInWeatherUnits:(id)arg1;
- (id)_currentWeekday:(id)arg1;
- (id)_currentShortDate:(id)arg1;
- (id)_currentLongDate:(id)arg1;
- (id)_currentTime:(id)arg1;
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;
- (void)useSpeechMode:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


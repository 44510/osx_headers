//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BU_TDateFormatterController : NSObject
{
    struct TNSRef<BU_TValidatingDateFormatter *> _shortDateTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter *> _shortDateTimeFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter *> _shortDateOnlyFormatter;
    struct TNSRef<BU_TValidatingDateFormatter *> _shortDateOnlyFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter *> _mediumDateTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter *> _mediumDateTimeFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter *> _mediumDateOnlyFormatter;
    struct TNSRef<BU_TValidatingDateFormatter *> _mediumDateOnlyFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter *> _longDateTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter *> _longDateTimeFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter *> _fullDateTimeFormatter;
    struct TNSRef<BU_TValidatingDateFormatter *> _fullDateTimeFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter *> _fullDateOnlyFormatter;
    struct TNSRef<BU_TValidatingDateFormatter *> _fullDateOnlyFormatterRelative;
    struct TNSRef<BU_TValidatingDateFormatter *> _timeOnlyFormatter;
    struct TNSRef<BU_TValidatingDateFormatter *> _fileNameTimeFormatter;
}

+ (id)dateFormatterController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)fileNameTimeFormatter;
- (id)timeOnlyFormatter;
- (id)fullDateOnlyFormatter:(_Bool)arg1;
- (id)fullDateTimeFormatter:(_Bool)arg1;
- (id)longDateTimeFormatter:(_Bool)arg1;
- (id)mediumDateOnlyFormatter:(_Bool)arg1;
- (id)mediumDateTimeFormatter:(_Bool)arg1;
- (id)shortDateTimeFormatter:(_Bool)arg1;
- (id)shortDateOnlyFormatter:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSBestAppSuggestion, NSString;

@interface ASContinuityBestApplication : NSObject
{
    id _image;
    NSString *_title;
    NSString *_from;
    LSBestAppSuggestion *_suggestion;
}

@property(retain, nonatomic) LSBestAppSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) NSString *from; // @synthesize from=_from;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 title:(id)arg2 from:(id)arg3 suggestion:(id)arg4;

@end


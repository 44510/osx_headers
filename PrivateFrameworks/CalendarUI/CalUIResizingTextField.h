//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSDictionary;

@interface CalUIResizingTextField : NSTextField
{
    BOOL _resizingEnabled;
    BOOL _automaticLinkDetection;
    BOOL _alwaysTreatAsLink;
    long long _maxLines;
    NSDictionary *_textAttributes;
    double _lineHeight;
}

@property(nonatomic) BOOL alwaysTreatAsLink; // @synthesize alwaysTreatAsLink=_alwaysTreatAsLink;
@property(nonatomic) BOOL automaticLinkDetection; // @synthesize automaticLinkDetection=_automaticLinkDetection;
@property double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property BOOL resizingEnabled; // @synthesize resizingEnabled=_resizingEnabled;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
- (void).cxx_destruct;
- (void)updateStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updatePreferredMaxLayoutWidth:(id)arg1;
- (void)enableEntireFieldTreatedAsLink;
- (void)enableAutomaticLinkDetection;
- (void)_configureForLinks;
- (void)configureText;
- (void)dealloc;
- (id)initWithResizeEnabled:(BOOL)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/DDXMLNode.h>

@interface DDXMLDocument : DDXMLNode
{
}

+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1;
- (id)XMLDataWithOptions:(unsigned long long)arg1;
- (id)XMLData;
- (id)rootElement;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithCheckedPrimitive:(struct _xmlKind *)arg1;
- (id)initWithUncheckedPrimitive:(struct _xmlKind *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOMNode.h"

@class DOMHTMLElement;

@interface DOMNode (MailExtras)
- (void)insertAsSiblingAfterNode:(id)arg1;
- (void)insertAsSiblingBeforeNode:(id)arg1;
- (void)convertBackgroundImageURLsUsingDictionary:(id)arg1;
- (BOOL)convertInlineStationeryBackgroundImageURL;
- (void)addInlineBackgroundImageURLToArray:(id)arg1;
- (id)findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3;
- (id)findElementWithTag:(id)arg1 andClass:(id)arg2;
- (void)stationeryAttachmentPlaceholderNodes:(id *)arg1;
- (id)stationeryAttachmentPlaceholderNodes;
- (void)objectElementChildNodes:(id *)arg1;
- (id)objectElementChildNodes;
- (void)descendants:(id *)arg1 withClassName:(id)arg2;
- (id)descendantsWithClassName:(id)arg1;
- (id)lastEditableElement;
- (void)editableElements:(id *)arg1;
- (id)editableElements;
- (id)tilingDiv;
- (id)tilingElements;
- (void)stationeryDynamicElementNodes:(id *)arg1;
- (id)stationeryDynamicElementNodes;
- (BOOL)convertInternalImagesToObjects;
- (id)attributedStringWithDocument:(id)arg1;
- (void)fixParagraphsAndQuotesFromMicrosoft;
- (void)fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (void)recursivelyFixParagraphs;
- (void)recursivelyRemoveMailAttributes;
- (void)restoreEditableElementsEdited:(id *)arg1 unedited:(id *)arg2;
- (void)recursivelyRemoveMailAttributes:(BOOL)arg1 convertObjectsToImages:(BOOL)arg2 convertEditableElements:(BOOL)arg3 removeDefaultColorStyle:(BOOL)arg4;
- (BOOL)_isAppleStringAttachmentSpan;
- (BOOL)containsRichTextForMessageFont:(id)arg1;
@property(readonly, nonatomic) DOMHTMLElement *containingListElement;
- (BOOL)containsOnlySelectionMarkers;
- (BOOL)isInEditableRegion;
- (id)topmostEditableAncestor;
- (long long)outlineNestingLevel;
- (id)precedingListItem;
- (id)containingListItem;
- (id)topmostContainingNodeWithNameInArray:(id)arg1;
- (id)firstContainingNodeWithNameInArray:(id)arg1;
- (id)descendantNamed:(id)arg1;
- (id)nestedListElement;
- (BOOL)isAtEndOfContainerNode:(id)arg1;
- (BOOL)isAtBeginningOfContainerNode:(id)arg1;
- (unsigned int)offsetOfChild:(id)arg1;
- (id)commonAncestorWithNode:(id)arg1;
- (BOOL)isDescendantOfNode:(id)arg1;
- (id)firstDescendantBlockQuote;
- (id)highestContainingBlockQuote;
- (id)containingBlockQuote;
- (long long)quoteLevelDelta;
- (long long)quoteLevel;
- (BOOL)hasNoSignificantContentsOtherThanAttachments;
- (BOOL)hasNoSignificantContentsOrWhitespace;
- (BOOL)hasNoSignificantContents;
- (BOOL)_hasNoSignificantContentsOrWhitespace:(BOOL)arg1 orAttachments:(BOOL)arg2;
- (BOOL)hasNoContents;
@property(readonly, nonatomic) BOOL isListElement;
@property(readonly, nonatomic) BOOL isBody;
- (BOOL)isNodeThatAffectsTyping;
- (id)elementAncestor;
- (id)blockNodeAncestor;
- (BOOL)isBlockLevelElement;
- (id)appendBlockPlaceholder;
- (id)stringValue;
- (id)_mail_traversePreviousNode;
- (id)_mail_traverseNextSiblingStayingWithin:(id)arg1;
- (id)_mail_traverseNextNodeStayingWithin:(id)arg1;
@property(readonly, nonatomic) DOMNode *previousNode;
@property(readonly, nonatomic) DOMNode *nextNode;
- (id)nextSiblingOrAunt;
@property(readonly, nonatomic) BOOL _mail_isAttached;
- (BOOL)isTemporaryCursorMarker;
- (void)removeStrayLinefeeds;
- (void)_removeStrayLinefeedsAtBeginning;
- (void)_removeStrayLinefeedsAtEnd;
- (id)XPathRelativeTo:(id)arg1;
@end


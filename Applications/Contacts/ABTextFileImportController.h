//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class ABAddressBook, ABAddressImporter, ABCardView, ABCardViewController, ABImportMappingModel, NSArray, NSBox, NSButton, NSMenu, NSProgressIndicator, NSSegmentedControl, NSString, NSTabView, NSTableView, NSTextField;

@interface ABTextFileImportController : NSWindowController
{
    NSTabView *previewTabView;
    NSBox *previewBox;
    NSTableView *setupView;
    NSSegmentedControl *backForwardControl;
    NSButton *ignoreFirstCardButton;
    NSTextField *cardCountField;
    NSProgressIndicator *progressIndicator;
    ABCardView *cardView;
    unsigned long long _currentCard;
    ABAddressImporter *_importer;
    ABImportMappingModel *_mappingModel;
    NSMenu *_columnPickerMenu;
    NSMenu *_mappingMenu;
    NSString *_emptyValuePlaceHolder;
    NSString *_sourceFileName;
    NSArray *_localizedAddressMappingOrder;
    ABAddressBook *_temporaryAddressBook;
    id <ABImporterDelegate> _delegate;
    ABCardViewController *_cardViewController;
}

+ (id)createLocalizedAddressMapping;
+ (id)textFileImportControllerWithFile:(id)arg1 delegate:(id)arg2 encoding:(unsigned long long)arg3;
- (void)addItemForABProperty:(id)arg1 labels:(id)arg2 model:(id)arg3 toMenu:(id)arg4;
- (void)addItemForInstantMessageService:(id)arg1 labels:(id)arg2 model:(id)arg3 toMenu:(id)arg4;
- (void)addItemForSocialProfile:(id)arg1 model:(id)arg2 toMenu:(id)arg3;
- (void)updateColumnPickerMenu:(id)arg1;
- (id)newColumnPickerMenu;
- (void)enableItem:(id)arg1 row:(long long)arg2;
- (void)updateMappingMenu:(id)arg1 row:(long long)arg2;
- (id)buildMappingMenuWithModel:(id)arg1;
- (void)updateCardSteppers;
- (void)updatePreview;
- (void)updateAll:(id)arg1;
- (id)columnPickerMenuWithCell:(id)arg1;
- (id)mappingMenuWithCell:(id)arg1;
- (void)updateDataColumnTitle;
- (void)importMappingModelChanged:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)updateMinWindowSize:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)setSourceFile:(id)arg1 encoding:(unsigned long long)arg2;
- (void)setSkipFirstCard:(id)arg1;
- (void)previousCard:(id)arg1;
- (void)nextCard:(id)arg1;
- (void)backForwardCard:(id)arg1;
- (void)import:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)cancel:(id)arg1;
- (void)close;
- (void)showWindow:(id)arg1;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end


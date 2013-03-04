//
//  NJMappingsController.h
//  Enjoy
//
//  Created by Sam McCall on 4/05/09.
//  Copyright 2009 University of Otago. All rights reserved.
//

@class NJMapping;
@class NJOutputController;

@interface NJMappingsController : NSObject <NSTableViewDataSource,
                                            NSTableViewDelegate,
                                            NSOpenSavePanelDelegate,
                                            NSFastEnumeration>
{
    IBOutlet NSButton *removeButton;
    IBOutlet NSTableView *tableView;
    IBOutlet NJOutputController *outputController;
    IBOutlet NSButton *popoverActivate;
    IBOutlet NSPopover *popover;
}

@property (nonatomic, readonly) NJMapping *currentMapping;
@property (nonatomic, readonly) NSArray *mappings;

- (NJMapping *)objectForKeyedSubscript:(NSString *)name;
- (NJMapping *)objectAtIndexedSubscript:(NSUInteger)idx;
- (void)activateMapping:(NJMapping *)mapping;
- (void)activateMappingForProcess:(NSString *)processName;
- (void)save;
- (void)load;

- (IBAction)mappingPressed:(id)sender;
- (IBAction)addPressed:(id)sender;
- (IBAction)removePressed:(id)sender;
- (IBAction)importPressed:(id)sender;
- (IBAction)exportPressed:(id)sender;

@end
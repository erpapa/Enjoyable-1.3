//
//  NJDeviceController.h
//  Enjoy
//
//  Created by Sam McCall on 4/05/09.
//  Copyright 2009 University of Otago. All rights reserved.
//

@class NJDevice;
@class NJInput;
@class NJMappingsController;
@class NJOutputController;

@interface NJDeviceController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate> {
	IBOutlet NSOutlineView *outlineView;
	IBOutlet NJOutputController *outputController;
	IBOutlet NJMappingsController *mappingsController;
    IBOutlet NSSegmentedControl *translatingEventsSetting;
}

@property (nonatomic, readonly) NJInput *selectedInput;
@property (nonatomic, assign) NSPoint mouseLoc;
@property (nonatomic, assign) BOOL frontWindowOnly;
@property (nonatomic, assign) BOOL translatingEvents;

- (void)setup;
- (NJDevice *)findDeviceByRef:(IOHIDDeviceRef)device;

- (IBAction)translatingEventsChanged:(id)sender;

@end

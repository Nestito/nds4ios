//
//  Settings.h
//  nds4ios
//
//  Created by Developer on 6/30/13.
//  Copyright (c) 2013 Homebrew. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Settings : UITableViewController
{
    IBOutlet UISwitch *disableSound;
    IBOutlet UISlider *controlOpacity;
    IBOutlet UISwitch *shiftPad;
    IBOutlet UISwitch *showFPS;
    IBOutlet UISegmentedControl *frameSkip;
    IBOutlet UISegmentedControl *dPadType;
}

@end

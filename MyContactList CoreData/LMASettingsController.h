//
//  LMASettingsController.h
//  MyContactList CoreData
//
//  Created by Jakob Iversen on 9/9/13.
//  Copyright (c) 2013 Learning Mobile Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LMASettingsController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> 
@property (weak, nonatomic) IBOutlet UIPickerView *pckSortField;
@property (weak, nonatomic) IBOutlet UISwitch *swAscending;
- (IBAction)sortDirectionChanged:(id)sender;
@property (weak, nonatomic) IBOutlet UISlider *sliderX;
@property (weak, nonatomic) IBOutlet UISlider *sliderY;
@property (weak, nonatomic) IBOutlet UISlider *sliderZ;

@property (nonatomic, retain) IBOutlet UILabel *labelX;
@property (nonatomic, retain) IBOutlet UILabel *labelY;
@property (nonatomic, retain) IBOutlet UILabel *labelZ;

@property (nonatomic, retain) IBOutlet UIProgressView *progressX;
@property (nonatomic, retain) IBOutlet UIProgressView *progressY;
@property (nonatomic, retain) IBOutlet UIProgressView *progressZ;

@property (weak, nonatomic) IBOutlet UILabel *lblBattery;
@end

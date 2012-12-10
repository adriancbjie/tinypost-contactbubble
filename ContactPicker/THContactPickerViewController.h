//
//  ContactPickerViewController.h
//  ContactPicker
//
//  Created by Tristan Himmelman on 11/2/12.
//  Copyright (c) 2012 Tristan Himmelman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "THContactPickerView.h"

@interface THContactPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, THContactPickerDelegate>

@property (nonatomic, retain) THContactPickerView *contactPickerView;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, retain) NSMutableArray *selectedContacts;
@property (nonatomic, retain) NSArray *filteredContacts;

@end

//
//  MasterViewController.h
//  FinkaFoo Du
//
//  Created by Dennis Suto on 10/26/13.
//  Copyright (c) 2013 Dennis Suto. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

//
//  DetailViewController.h
//  FinkaFoo Du
//
//  Created by Dennis Suto on 10/26/13.
//  Copyright (c) 2013 Dennis Suto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

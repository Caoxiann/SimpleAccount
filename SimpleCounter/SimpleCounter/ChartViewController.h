//
//  ChartViewController.h
//  SimpleCounter
//
//  Created by 陈浩贤 on 2017/3/11.
//  Copyright © 2017年 陈浩贤. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChartViewController : UIViewController
- (IBAction)segementDidChange:(id)sender;
@property (weak, nonatomic) IBOutlet UIView *lineView;

@property (weak, nonatomic) IBOutlet UIView *graphView;

@end
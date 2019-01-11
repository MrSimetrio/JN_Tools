//
//  MainViewController.m
//  Tools
//
//  Created by 江鸟 on 2019/1/11.
//  Copyright © 2019年 Simetrio. All rights reserved.
//

#import "MainViewController.h"
#import "UIColor+ColorTools.h"

@interface MainViewController ()
@property (weak, nonatomic) IBOutlet UILabel *Lable;

@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.Lable.backgroundColor = [UIColor colorWithHex:0x333333];
}


@end

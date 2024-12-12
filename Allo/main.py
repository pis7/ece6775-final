import argparse
from attention import attention_unopt_test, attention_opt_test

def main():
    parser = argparse.ArgumentParser()
    
    # Add a target argument
    parser.add_argument(
        "--target",
        type=str,
        choices=["sw", "vivado"],
        default="sw",
        help="Specify the target as either 'sw' or 'vivado'."
    )

    # Add a implementation argument
    parser.add_argument(
        "--imp",
        type=str,
        choices=["unopt", "opt-area", "opt-agressive"],
        default="opt-area",
        help="Specify the implementation as either 'unopt', 'opt-area', or 'opt-agressive'."
    )
    
    # Parse arguments
    args = parser.parse_args()

    # Run attention kernel
    if args.imp == "unopt":
        attention_unopt_test(args.target, args.imp)
    else:
        attention_opt_test(args.target, args.imp)

if __name__ == "__main__":
    main()
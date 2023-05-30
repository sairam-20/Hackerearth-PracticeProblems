def is_safe(board, row, col, N):
    for i in range(col):
        if board[row][i] == 1:
            return False
    i, j = row, col
    while i >= 0 and j >= 0:
        if board[i][j] == 1:
            return False
        i -= 1
        j -= 1

    i, j = row, col
    while i < N and j >= 0:
        if board[i][j] == 1:
            return False
        i += 1
        j -= 1

    return True


def solve_n_queens(board, col, N):

    if col >= N:
        return True

    for i in range(N):
        if is_safe(board, i, col, N):   
            board[i][col] = 1
            if solve_n_queens(board, col + 1, N):
                return True

            board[i][col] = 0

    return False


def print_board(board):
    for i in range(len(board)):
        for j in range(len(board)):
            print(board[j][i], end=' ')
        print()


def n_queens(N):
    
    board = [[0] * N for _ in range(N)]


    if solve_n_queens(board, 0, N):
        
        print_board(board)
    else:
        
        print("Not possible")



N = int(input())


n_queens(N)

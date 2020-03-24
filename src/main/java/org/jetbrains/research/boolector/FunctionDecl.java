package org.jetbrains.research.boolector;

import java.util.List;

public class FunctionDecl extends BoolectorFun {
    final private long[] params;

    private FunctionDecl(Btor btor, long ref, long[] params) {
        super(btor, ref);
        this.params = params;
    }

    public BoolectorNode apply(List<BoolectorNode> argNodesFunc) {
        long[] argNodes = toLong(argNodesFunc.toArray(new BoolectorNode[0]));
        return BoolectorNode.create(btor, Native.apply(btor.getRef(), argNodes, argNodes.length, ref), null);
    }

    public long[] getParams() {
        return params;
    }

    public static FunctionDecl func(BoolectorNode nodeBody, List<FunctionParam> functionParams) {
        Btor btor = nodeBody.getBtor();
        long[] params = toLong(functionParams.toArray(new FunctionParam[0]));
        return new FunctionDecl(btor, Native.fun(btor.getRef(), params, params.length, nodeBody.getRef()), params);
    }

    public static FunctionDecl forAll(BoolectorNode nodeBody, List<FunctionParam> functionParams) {
        Btor btor = nodeBody.getBtor();
        long[] params = toLong(functionParams.toArray(new FunctionParam[0]));
        return new FunctionDecl(btor, Native.forAll(btor.getRef(), params, params.length, nodeBody.getRef()), params);
    }
}

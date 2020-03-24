package org.jetbrains.research.boolector;

import org.junit.Test;

import java.util.Arrays;
import java.util.List;

import static junit.framework.TestCase.assertEquals;

public class FunctionDeclTest {

    @Test
    public void testAll() {
        Btor btor = new Btor();
        BitvecSort sort = BitvecSort.bitvecSort(btor, 8);
        BitvecNode x = BitvecNode.var(sort, "nullINc", true);
        BitvecNode y = BitvecNode.var(sort, "nullINc", true);
        BitvecNode a = BitvecNode.constInt(10, sort);
        BitvecNode b = BitvecNode.constInt(20, sort);
        a.add(b);

        BitvecNode temp = x.add(y);
        BoolectorFun.FunctionParam firstParam = BoolectorFun.FunctionParam.param(sort, "nullINc");
        BoolectorFun.FunctionParam secondParam = BoolectorFun.FunctionParam.param(sort, "nullINc");
        List<BoolectorFun.FunctionParam> param = Arrays.asList(firstParam, secondParam);
        FunctionDecl slt = FunctionDecl.func(temp, param);
        List<BoolectorNode> paramX = Arrays.asList(x, y);
        BitvecNode first = (BitvecNode) slt.apply(paramX);
        BitvecNode second = (BitvecNode) slt.apply(paramX);
        BoolNode eq = first.eq(second);
        assertFormulae(btor, eq);
    }

    private static void assertFormulae(Btor btor, BoolNode node) {
        BoolNode formula = node.not();
        formula.assertForm();
        Btor.Status ans = btor.check();
        assertEquals(Btor.Status.UNSAT, ans);

        btor.release();
    }
}